//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol QLThumbnailAdditionIndexInterface, QLThumbnailsInterface;

@interface QLThumbnailServiceProxy : NSObject
{
    NSXPCConnection *_connection;
    NSObject<QLThumbnailsInterface> *_proxy;
    NSObject<QLThumbnailAdditionIndexInterface> *_indexProxy;
}

+ (id)interface;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)touchOrAddThumbnailAddition:(id)arg1 forURL:(id)arg2;
- (void)askThumbnailAdditionIndex:(CDUnknownBlockType)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;

@end

