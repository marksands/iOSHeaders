//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CNVCardSelectorMap : NSObject
{
    NSMutableArray *_strings;
    NSMutableArray *_selectors;
}

- (void).cxx_destruct;
- (SEL)selectorForString:(id)arg1;
- (void)setSelector:(SEL)arg1 forString:(id)arg2;
- (id)init;

@end

