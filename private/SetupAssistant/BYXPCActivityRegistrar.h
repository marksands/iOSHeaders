//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BYXPCActivityRegistrar : NSObject
{
}

+ (id)sharedInstance;
- (void)unregisterActivityWithIdentifier:(const char *)arg1;
- (void)registerActivityWithIdentifier:(const char *)arg1 criteria:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

