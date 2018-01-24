//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVContentKeySession, NSData, NSDictionary, NSError;

@interface AVContentKeyRequestInternal : NSObject
{
    AVContentKeySession *session;
    id identifier;
    NSData *initializationData;
    long long status;
    id customURLProviderContext;
    int responseInfoSent;
    _Bool providesPersistableKey;
    NSDictionary *preloadingRequestOptions;
    struct OpaqueFigCPECryptor *figCryptor;
    NSError *error;
    struct __CFDictionary *requestInfo;
    unsigned long long requestID;
    struct OpaqueFigCustomURLHandler *customURLHandler;
    int cryptorListenerAdded;
}

@end

