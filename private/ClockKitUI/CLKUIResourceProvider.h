//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSNumber, NSSet;

@interface CLKUIResourceProvider : NSObject
{
    NSMutableSet *_uuidHistory;
    id <CLKUIResourceProviderDelegate> _delegate;
    NSNumber *_key;
}

@property(readonly, nonatomic) NSNumber *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSSet *uuidHistory; // @synthesize uuidHistory=_uuidHistory;
@property(readonly, nonatomic) __weak id <CLKUIResourceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addUuidToHistory:(id)arg1;
- (id)initWithDelegate:(id)arg1 key:(id)arg2;

@end

