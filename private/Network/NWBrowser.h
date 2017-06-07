//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NWBrowseDescriptor, NWParameters;
@protocol OS_nw_browser;

@interface NWBrowser : NSObject
{
    NWBrowseDescriptor *_descriptor;
    NWParameters *_parameters;
    NSObject<OS_nw_browser> *_internalBrowser;
    NSSet *_internalDiscoveredEndpoints;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain) NSSet *internalDiscoveredEndpoints; // @synthesize internalDiscoveredEndpoints=_internalDiscoveredEndpoints;
@property(readonly) NSObject<OS_nw_browser> *internalBrowser; // @synthesize internalBrowser=_internalBrowser;
@property(readonly) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly) NWBrowseDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *discoveredEndpoints;
- (id)copyDiscoveredEndpoints;
- (void)dealloc;
- (void)cancel;
- (id)initWithDescriptor:(id)arg1 parameters:(id)arg2;
- (void)setUpdateHandler;

@end

