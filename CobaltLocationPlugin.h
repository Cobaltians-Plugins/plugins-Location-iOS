//
//  CobaltLocationPlugin.h
//  Cobalt
//
//  Created by Haploid on 23/07/14.
//  Copyright (c) 2014 Haploid. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

#import <Cobalt/CobaltAbstractPlugin.h>

#define LONGITUDE   @"longitude"
#define LATITUDE    @"latitude"


@interface CobaltLocationPlugin : CobaltAbstractPlugin <CLLocationManagerDelegate>
{
    CobaltViewController * _viewController;
    BOOL _sendToWeb;
}

@property (nonatomic, strong) CLLocationManager * locationManager;

@end
