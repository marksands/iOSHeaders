//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WebItemProviderRegistrationInfoList : NSObject
{
    struct RetainPtr<NSMutableArray> _items;
    NSString *_suggestedName;
    struct CGSize _estimatedDisplayedSize;
}

@property(retain, nonatomic) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
@property(nonatomic) struct CGSize estimatedDisplayedSize; // @synthesize estimatedDisplayedSize=_estimatedDisplayedSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateItems:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)addRepresentingObject:(id)arg1;
- (void)addData:(id)arg1 forType:(id)arg2;
- (id)init;

@end
