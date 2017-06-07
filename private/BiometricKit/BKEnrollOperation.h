//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BiometricKit/BKOperation.h>

@class NSData;
@protocol BKEnrollOperationDelegate;

@interface BKEnrollOperation : BKOperation
{
    unsigned int _userID;
    NSData *_credentialSet;
}

@property(copy, nonatomic) NSData *credentialSet; // @synthesize credentialSet=_credentialSet;
@property(nonatomic) unsigned int userID; // @synthesize userID=_userID;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) __weak id <BKEnrollOperationDelegate> delegate; // @dynamic delegate;

@end

