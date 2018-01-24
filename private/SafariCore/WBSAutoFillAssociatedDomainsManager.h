//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface WBSAutoFillAssociatedDomainsManager : NSObject
{
    NSMutableDictionary *_domainToDomainsWithAssociatedCredentials;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSArray *_domainsWithAssociatedCredentials;
}

@property(copy, nonatomic) NSArray *domainsWithAssociatedCredentials; // @synthesize domainsWithAssociatedCredentials=_domainsWithAssociatedCredentials;
- (void).cxx_destruct;
- (void)_updateDomainToDomainsWithAssociatedCredentials;
- (id)domainsWithAssociatedCredentialsForDomain:(id)arg1;
- (id)initWithDomainsWithAssociatedCredentials:(id)arg1;
- (id)init;

@end

