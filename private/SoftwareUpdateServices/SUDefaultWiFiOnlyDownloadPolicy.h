//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUDefaultWiFiOnlyDownloadPolicy : SUDefaultDownloadPolicy
{
}

+ (unsigned long long)wifiOnlyPeriodInDaysForUpdate:(id)arg1;
- (_Bool)isDownloadAllowableForCellular;
- (id)initWithDescriptor:(id)arg1;

@end

