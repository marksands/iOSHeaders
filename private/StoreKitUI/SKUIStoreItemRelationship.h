//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, SKUIStoreIdentifier;

@interface SKUIStoreItemRelationship : NSObject
{
    SKUIStoreIdentifier *_singleParent;
    NSSet *_chidItems;
}

@property(readonly, copy, nonatomic) NSSet *chidItems; // @synthesize chidItems=_chidItems;
@property(readonly, copy, nonatomic) SKUIStoreIdentifier *singleParent; // @synthesize singleParent=_singleParent;
- (void).cxx_destruct;
- (id)initWithParent:(id)arg1 andChildren:(id)arg2;

@end

