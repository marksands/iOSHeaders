//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AAFamilyRequest.h"

@class NSString;

@interface FAAcceptChildTransferRequest : AAFamilyRequest
{
    NSString *_requestCode;
}

@property(copy, nonatomic) NSString *requestCode; // @synthesize requestCode=_requestCode;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (_Bool)isUserInitiated;

@end

