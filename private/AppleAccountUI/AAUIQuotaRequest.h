//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AARequest.h"

@class ACAccount;

@interface AAUIQuotaRequest : AARequest
{
    ACAccount *_account;
    _Bool _isDetailedRequest;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initDetailedRequestWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

