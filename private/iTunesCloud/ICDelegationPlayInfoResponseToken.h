//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate;

@interface ICDelegationPlayInfoResponseToken : NSObject
{
    NSData *_tokenData;
    NSDate *_expirationDate;
}

@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
- (void).cxx_destruct;

@end

