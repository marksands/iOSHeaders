//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PEXServant : NSObject
{
}

- (unsigned char)loadRecentNamesWithNamedEntityHandler:(CDUnknownBlockType)arg1 contactNameItemHandler:(CDUnknownBlockType)arg2 source:(unsigned char)arg3 objects:(id)arg4;
- (unsigned char)loadNamesWithNamedEntityHandler:(CDUnknownBlockType)arg1 contactNameItemHandler:(CDUnknownBlockType)arg2 detectedSince:(id)arg3;
- (id)nameItemsWithLimit:(unsigned long long)arg1;
- (id)quickTypeItemsForCriteria:(id)arg1 limit:(unsigned long long)arg2;

@end

