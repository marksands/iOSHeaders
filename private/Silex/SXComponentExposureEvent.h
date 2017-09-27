//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXAnalyticsEvent.h>

@class NSDictionary, NSString;

@interface SXComponentExposureEvent : SXAnalyticsEvent
{
    NSString *_componentIdentifier;
    NSString *_componentType;
    NSString *_componentRole;
    NSDictionary *_metaData;
}

@property(readonly, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property(readonly, nonatomic) NSString *componentRole; // @synthesize componentRole=_componentRole;
@property(readonly, nonatomic) NSString *componentType; // @synthesize componentType=_componentType;
@property(readonly, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
- (void).cxx_destruct;
- (id)initWithComponent:(id)arg1;

@end

