//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IKAppDeviceConfig.h"

@class NSString;

@interface SKUIAppDeviceConfig : NSObject <IKAppDeviceConfig>
{
}

- (id)timeZone;
- (id)systemLanguage;
- (id)storeFrontCountryCode;
- (id)currentSizeClasses;
- (struct CGSize)screenSize;
- (unsigned long long)preferredVideoPreviewFormat;
- (unsigned long long)preferredVideoFormat;
- (_Bool)isTimeZoneSet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

