//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PXReusableObjectPool : NSObject
{
    struct {
        _Bool respondsToDidCreateReusableObject;
        _Bool respondsToObjectBecameReusable;
        _Bool respondsToObjectPreparedForReuse;
    } _delegateFlags;
    id <PXReusableObjectPoolDelegate> _delegate;
    NSMutableDictionary *__objectCreationBlocksByReuseIdentifier;
    NSMutableDictionary *__reusableObjectsByReuseIdentifier;
}

@property(readonly, nonatomic) NSMutableDictionary *_reusableObjectsByReuseIdentifier; // @synthesize _reusableObjectsByReuseIdentifier=__reusableObjectsByReuseIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier; // @synthesize _objectCreationBlocksByReuseIdentifier=__objectCreationBlocksByReuseIdentifier;
@property(nonatomic) __weak id <PXReusableObjectPoolDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkInReusableObject:(id)arg1;
- (id)checkOutReusableObjectWithReuseIdentifier:(long long)arg1;
- (void)registerReusableObjectForReuseIdentifier:(long long)arg1 creationHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

