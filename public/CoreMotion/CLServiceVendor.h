//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CLServiceVendor : NSObject
{
    NSMutableDictionary *_catalog;
    NSDictionary *_serviceReplacementMap;
    NSMutableSet *_unavailableServiceNames;
    int _missBehavior;
    NSMutableDictionary *_recordingFromTriggersByTo;
    NSMutableDictionary *_recordingToTriggersByFrom;
    shared_ptr_06cc74dc _recordingWriter;
}

+ (id)sharedInstance;
+ (void)rereadConfiguration;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getSiloForService:(id)arg1;
- (id)proxyForService:(id)arg1 forClient:(id)arg2;
- (id)proxyForService:(id)arg1;
- (_Bool)ensureServiceIsRunning:(id)arg1;
- (_Bool)isServiceRunning:(id)arg1;
- (_Bool)isServiceEnabled:(id)arg1;
- (void)retireServiceWithName:(id)arg1;
- (id)getServiceWithName:(id)arg1;
- (id)setRecordingTriggerMap:(id)arg1 outputPathBase:(id)arg2;
- (void)setServiceReplacementMap:(id)arg1 missBehavior:(int)arg2;
- (id)init;

@end

