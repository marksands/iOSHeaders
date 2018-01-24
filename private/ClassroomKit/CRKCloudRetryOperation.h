//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATOperation.h"

@class CATOperationQueue, CRKCloudOperation<CRKCloudResetable>;

@interface CRKCloudRetryOperation : CATOperation
{
    unsigned long long mAttempts;
    CRKCloudOperation<CRKCloudResetable> *_cloudOperation;
    CATOperationQueue *_operationQueue;
}

+ (id)new;
@property(readonly, nonatomic) CATOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) CRKCloudOperation<CRKCloudResetable> *cloudOperation; // @synthesize cloudOperation=_cloudOperation;
- (void).cxx_destruct;
- (void)performRetry:(id)arg1;
- (void)cloudOperationDidFinish:(id)arg1;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithOperationQueue:(id)arg1 cloudOperation:(id)arg2;
- (id)init;

@end

