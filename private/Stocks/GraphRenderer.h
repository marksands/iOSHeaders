//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface GraphRenderer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _cancelled;
}

+ (void)clearSharedRenderer;
+ (id)sharedRenderer;
- (void).cxx_destruct;
- (void)performRenderOperation:(id)arg1;
- (id)init;

@end

