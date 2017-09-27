//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, VSAccountStore, VSOptional;

__attribute__((visibility("hidden")))
@interface VSCredentialSaveOperation : VSAsyncOperation
{
    VSOptional *_result;
    NSArray *_unsavedAccounts;
    VSAccountStore *_accountStore;
}

@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(copy, nonatomic) NSArray *unsavedAccounts; // @synthesize unsavedAccounts=_unsavedAccounts;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (void)_didSaveAccounts:(id)arg1 withResult:(_Bool)arg2 error:(id)arg3;
- (id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2;
- (id)init;

@end

