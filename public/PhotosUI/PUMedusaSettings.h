//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXSettings.h"

__attribute__((visibility("hidden")))
@interface PUMedusaSettings : PXSettings
{
    double __desiredWidth;
    double __widthDelay;
    double __testStartDelay;
    double __testInterval;
    double __testIncrement;
}

+ (void)runSizeTest;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) double _testIncrement; // @synthesize _testIncrement=__testIncrement;
@property(nonatomic) double _testInterval; // @synthesize _testInterval=__testInterval;
@property(nonatomic) double _testStartDelay; // @synthesize _testStartDelay=__testStartDelay;
@property(nonatomic) double _widthDelay; // @synthesize _widthDelay=__widthDelay;
@property(nonatomic) double _desiredWidth; // @synthesize _desiredWidth=__desiredWidth;
- (id)parentSettings;

@end

