//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface ETColorStore : NSObject
{
    NSMutableArray *_colors;
    unsigned long long _selectedColorIndex;
    _Bool _selectedIndexLoaded;
}

+ (id)defaultStore;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedColorIndex;
- (void)saveColor:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)_colors;
@property(readonly, nonatomic) NSArray *colors;
- (void)defaultsChanged:(id)arg1;
- (void)addDefaultsObserver;
- (id)init;
- (void)dealloc;

@end

