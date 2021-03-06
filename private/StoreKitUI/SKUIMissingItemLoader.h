//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKUIItemRequestDelegate.h"

@class NSMutableDictionary, NSString, SKUIResourceLoader;

@interface SKUIMissingItemLoader : NSObject <SKUIItemRequestDelegate>
{
    long long _batchSize;
    id <SKUIMissingItemDelegate> _delegate;
    NSString *_imageProfile;
    NSString *_keyProfile;
    SKUIResourceLoader *_loader;
    NSMutableDictionary *_requests;
}

@property(copy, nonatomic) NSString *keyProfile; // @synthesize keyProfile=_keyProfile;
@property(copy, nonatomic) NSString *imageProfile; // @synthesize imageProfile=_imageProfile;
@property(nonatomic) __weak id <SKUIMissingItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
- (void).cxx_destruct;
- (void)_requestItems:(id)arg1 withReason:(long long)arg2;
- (id)_existingRequestIDForItemID:(id)arg1;
- (void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (void)loadItemsWithIdentifiers:(id)arg1 reason:(long long)arg2;
- (void)loadItemsForPageComponent:(id)arg1 startIndex:(long long)arg2 reason:(long long)arg3;
- (id)initWithResourceLoader:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

