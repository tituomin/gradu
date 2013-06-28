#!/usr/bin/python
# -*- coding: utf-8 -*-

from numpy import polyfit, reshape, polyval

def linear_fit_columns(x, y):
    p, residuals, rank, singular_values, rcond = polyfit(x, y, 1, full=True)
    ynorm = normalized(x, y, p)
    pnorm, residuals, rank, singular_values, rcond = polyfit(x, ynorm, 1, full=True)
    return p, residuals

def normalized(x, y, poly):
    # normali
    return (x - poly[1]) / poly[0]

def linear_fit(rows):
    columns = reshape(rows, len(rows)*len(rows[0]), order='F').reshape((len(rows[0]), -1))
    x = columns[0]
    columns = columns[1:]
    residuals = [linear_fit_columns(x, col)[1][0] for col in columns]
    polys = [linear_fit_columns(x, col)[0] for col in columns]
    return x, polys, residuals

def estimate_measuring_overhead(rows):
    x, polys, residuals = linear_fit(rows)
    print polys
    return [p[1] for p in polys]

def optimize_bins(x):
    """
    Created on Thu Oct 25 11:32:47 2012

    Histogram Binwidth Optimization Method

    Shimazaki and Shinomoto, Neural Comput 19 1503-1527, 2007 
    2006 Author Hideaki Shimazaki, Matlab
    Department of Physics, Kyoto University
    shimazaki at ton.scphys.kyoto-u.ac.jp
    Please feel free to use/modify this program.

    Version in python adapted Érbet Almeida Costa

    Data: the duration for eruptions of
    the Old Faithful geyser in Yellowstone National Park (in minutes)
    or normal distribuition.
    Version in python adapted Érbet Almeida Costa
    Bugfix by Takuma Torii 2.24.2013

    """

    import numpy as np
    from numpy import mean, size, zeros, where, transpose
    from numpy.random import normal
    from matplotlib.pyplot import hist
    from scipy import linspace
    import array

#    from matplotlib.pyplot import figure,  plot, xlabel, ylabel,\
#        title, show, savefig, hist

    #x = normal(0, 100, 1e2) # Generate n pseudo-random numbers whit(mu,sigma,n)
    #x = [4.37,3.87,4.00,4.03,3.50,4.08,2.25,4.70,1.73,4.93,1.73,4.62,\
    #3.43,4.25,1.68,3.92,3.68,3.10,4.03,1.77,4.08,1.75,3.20,1.85,\
    #4.62,1.97,4.50,3.92,4.35,2.33,3.83,1.88,4.60,1.80,4.73,1.77,\
    #4.57,1.85,3.52,4.00,3.70,3.72,4.25,3.58,3.80,3.77,3.75,2.50,\
    #4.50,4.10,3.70,3.80,3.43,4.00,2.27,4.40,4.05,4.25,3.33,2.00,\
    #4.33,2.93,4.58,1.90,3.58,3.73,3.73,1.82,4.63,3.50,4.00,3.67,\
    #1.67,4.60,1.67,4.00,1.80,4.42,1.90,4.63,2.93,3.50,1.97,4.28,\
    #1.83,4.13,1.83,4.65,4.20,3.93,4.33,1.83,4.53,2.03,4.18,4.43,\
    #4.07,4.13,3.95,4.10,2.27,4.58,1.90,4.50,1.95,4.83,4.12]

    x_max = max(x)
    x_min = min(x)
    N_MIN = 4   #Minimum number of bins (integer)
                #N_MIN must be more than 1 (N_MIN > 1).
    N_MAX = 1000  #Maximum number of bins (integer)
    N = range(N_MIN,N_MAX) # #of Bins
    N = np.array(N)
    D = (x_max-x_min)/N    #Bin size vector
    C = zeros(shape=(size(D),1))

    #Computation of the cost function
    for i in xrange(size(N)):
        edges = linspace(x_min,x_max,N[i]+1) # Bin edges
        ki = hist(x,edges) # Count # of events in bins
        ki = ki[0]    
        k = mean(ki) #Mean of event count
        v = sum((ki-k)**2)/N[i] #Variance of event count
        C[i] = (2*k-v)/((D[i])**2) #The cost Function
    #Optimal Bin Size Selection

    cmin = min(C)
    idx  = where(C==cmin)
    idx = int(idx[0])
    optD = D[idx]

    edges = linspace(x_min,x_max,N[idx]+1)

    return optD, edges

    # fig = figure()
    # ax = fig.add_subplot(111)
    # ax.hist(x,edges)
    # title(u"Histogram")
    # ylabel(u"Frequency")
    # xlabel(u"Value")
    # savefig('Hist.png')         
    # fig = figure()
    # plot(D,C,'.b',optD,cmin,'*r')
    # savefig('Fobj.png')
