//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSInformant.h>

@interface CLSPublicEventInformant : CLSInformant
{
}

+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;
+ (id)familyIdentifier;
- (id)_urlStringWithCoordinates:(struct CLLocationCoordinate2D)arg1 fromDate:(id)arg2 toDate:(id)arg3 radius:(double)arg4 eventType:(unsigned long long)arg5;
- (id)gatherCluesOperationForInvestigation:(id)arg1;

@end
