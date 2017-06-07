//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NanoResourceGrabber : NSObject
{
    _Bool _connectionMayBeValid;
    NSXPCConnection *_nrgdConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_iconCacheQueue;
}

+ (id)iconDataForBundleID:(id)arg1 variant:(int)arg2 proxy:(id)arg3;
+ (id)liIconVariants;
+ (id)nrgIconVariants;
+ (id)_iconVariant:(int)arg1 fromURL:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *iconCacheQueue; // @synthesize iconCacheQueue=_iconCacheQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool connectionMayBeValid; // @synthesize connectionMayBeValid=_connectionMayBeValid;
@property(retain, nonatomic) NSXPCConnection *nrgdConnection; // @synthesize nrgdConnection=_nrgdConnection;
- (void).cxx_destruct;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id *)arg3 queue:(id)arg4 updateBlock:(CDUnknownBlockType)arg5 timeout:(double)arg6;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id *)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)_getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2;
- (void)_setCachedIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3;
- (void)_getLocalIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3;
- (void)getRemoteIconForBundleIDBypassingCache:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3 timeout:(double)arg4;
- (void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4 timeout:(double)arg5;
- (void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3 timeout:(double)arg4;
- (id)init;
- (id)connectToService;
- (void)dealloc;

@end

