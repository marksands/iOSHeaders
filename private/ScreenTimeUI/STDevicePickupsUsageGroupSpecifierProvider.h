//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STUsageGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STDevicePickupsUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider
{
    PSSpecifier *_pickupsSummaryGraphSpecifier;
    PSSpecifier *_pickupsAfterBedtimeSpecifier;
}

@property(retain, nonatomic) PSSpecifier *pickupsAfterBedtimeSpecifier; // @synthesize pickupsAfterBedtimeSpecifier=_pickupsAfterBedtimeSpecifier;
@property(retain, nonatomic) PSSpecifier *pickupsSummaryGraphSpecifier; // @synthesize pickupsSummaryGraphSpecifier=_pickupsSummaryGraphSpecifier;
- (void).cxx_destruct;
- (id)pickupsAfterBedtime:(id)arg1;
- (id)mostPickups:(id)arg1;
- (id)totalPickups:(id)arg1;
- (id)getPickupInfo:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end

