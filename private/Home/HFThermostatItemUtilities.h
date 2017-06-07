//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFThermostatItemUtilities : NSObject
{
}

+ (void)getDescription:(out id *)arg1 controlDescription:(out id *)arg2 optionalDescriptions:(out id *)arg3 forResponse:(id)arg4 primaryService:(id)arg5 temperatureFormatter:(id)arg6;
+ (id)targetTemperatureValueInResponse:(id)arg1;
+ (id)targetHeatingCoolingModeValueInResponse:(id)arg1;
+ (id)currentHeatingCoolingModeValueInResponse:(id)arg1;
+ (long long)_heatingCoolingValueForCurrentHeaterCoolerState:(long long)arg1 isActive:(_Bool)arg2;
+ (long long)_heatingCoolingValueForTargetHeaterCoolerState:(long long)arg1 isActive:(_Bool)arg2;

@end

