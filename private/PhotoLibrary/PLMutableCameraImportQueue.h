//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLMutableCameraImportQueue : NSObject
{
    NSMutableArray *_items;
}

- (void).cxx_destruct;
- (void)dequeueImportItem;
- (void)enqueueImportItem:(id)arg1;
- (id)currentItem;
- (id)description;
- (id)init;

@end

