//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMImageNode : AXMSourceNode
{
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
- (void)triggerWithImage:(id)arg1 cacheKey:(id)arg2 options:(unsigned long long)arg3 clientID:(long long)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)triggerWithImage:(id)arg1 cacheKey:(id)arg2 options:(unsigned long long)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)triggerWithImage:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)create:(id)arg1;

@end

