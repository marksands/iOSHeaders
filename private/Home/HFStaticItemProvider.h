//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSSet;

@interface HFStaticItemProvider : HFItemProvider
{
    _Bool _hasProvidedItems;
    NSSet *_staticItems;
}

@property(nonatomic) _Bool hasProvidedItems; // @synthesize hasProvidedItems=_hasProvidedItems;
@property(retain, nonatomic) NSSet *staticItems; // @synthesize staticItems=_staticItems;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithHome:(id)arg1 items:(id)arg2;
- (id)init;

@end

