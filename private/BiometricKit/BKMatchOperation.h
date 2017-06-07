//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BiometricKit/BKOperation.h>

@class NSData, NSNumber;
@protocol BKMatchOperationDelegate;

@interface BKMatchOperation : BKOperation
{
    _Bool _stopOnSuccess;
    _Bool _captureOnly;
    long long _purpose;
    NSNumber *_userID;
    long long _priority;
    NSData *_credentialSet;
    long long _useCase;
}

@property(nonatomic) _Bool captureOnly; // @synthesize captureOnly=_captureOnly;
@property(nonatomic) _Bool stopOnSuccess; // @synthesize stopOnSuccess=_stopOnSuccess;
@property(nonatomic) long long useCase; // @synthesize useCase=_useCase;
@property(copy, nonatomic) NSData *credentialSet; // @synthesize credentialSet=_credentialSet;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(nonatomic) long long purpose; // @synthesize purpose=_purpose;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) __weak id <BKMatchOperationDelegate> delegate; // @dynamic delegate;

@end

