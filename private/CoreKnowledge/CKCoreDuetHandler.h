//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKCoreDuetHandler : NSObject
{
}

+ (void)removeAllFromStreamNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)saveEvents:(id)arg1 toStreamNamed:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)duetEventsWithIdentifier:(id)arg1 inStreamNamed:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)duetKnowledgeStore;

@end

