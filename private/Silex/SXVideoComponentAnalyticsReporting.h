//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXAnalyticsReporting.h"

@class NSString, SXVideoComponent;

@interface SXVideoComponentAnalyticsReporting : NSObject <SXAnalyticsReporting>
{
    SXVideoComponent *_component;
    id <SXAnalyticsReporting> _analyticsReporting;
}

@property(readonly, nonatomic) __weak id <SXAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
@property(readonly, nonatomic) SXVideoComponent *component; // @synthesize component=_component;
- (void).cxx_destruct;
- (void)reportEvent:(id)arg1;
- (id)initWithComponent:(id)arg1 analyticsProviding:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

