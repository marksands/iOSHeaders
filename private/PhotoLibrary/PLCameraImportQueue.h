//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLCameraImportQueue : NSObject
{
    NSMutableArray *_items;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (id)itemsNotCompleted;
- (id)completedItems;
- (_Bool)isCompleted;
- (void)didCompleteItem:(id)arg1;
- (id)currentItem;
- (void)removeItem:(id)arg1;
- (void)setItems:(id)arg1;
- (id)items;
- (id)description;
- (id)initWithItems:(id)arg1;

@end

