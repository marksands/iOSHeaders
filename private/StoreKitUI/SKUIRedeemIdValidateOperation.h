//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

#import "ISDialogOperationDelegate.h"

@class NSDictionary, NSString;

@interface SKUIRedeemIdValidateOperation : ISOperation <ISDialogOperationDelegate>
{
    CDUnknownBlockType _resultBlock;
    NSDictionary *_dictionary;
}

@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void).cxx_destruct;
- (void)_logResultsForSuccess:(_Bool)arg1 failureReason:(id)arg2 failureMessage:(id)arg3 error:(id)arg4;
- (id)_subOperation;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)_handleFailure:(id)arg1 serverDialogDictionary:(id)arg2;
- (void)main;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

