//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVContentKeyRequestInternal, NSData, NSError;

@interface AVContentKeyRequest : NSObject
{
    AVContentKeyRequestInternal *_contentKeyRequest;
}

- (void)removeFigCryptorListeners;
- (void)addFigCryptorListeners;
- (void)_sendFinishLoadingToCustomURLHandlerWithError:(id)arg1;
- (void)_sendFinishLoadingToCustomURLHandler;
- (void)_sendDataToCustomURLHandler:(id)arg1;
- (void)_ensureResponseInfoSentToCustomURLHandler;
- (void)_sendResponseInfoToCustomURLHandler;
- (void)respondByRequestingPersistableContentKeyRequest;
- (void)renewExpiringContentKeyResponseData;
- (void)processContentKeyResponseError:(id)arg1;
- (void)processContentKeyResponse:(id)arg1;
- (void)processContentKeyResponseData:(id)arg1;
- (void)makeStreamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)contentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (struct OpaqueFigCPECryptor *)_setCryptorWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 error:(id *)arg2;
- (void)_handleKeyResponseError:(int)arg1;
- (id)_getRetryReasonForError:(int)arg1;
- (void)_handleUpdateToPersistentKey:(id)arg1;
- (struct OpaqueFigCPECryptor *)figCryptor;
@property(readonly) _Bool canProvidePersistableContentKey;
- (void)_setError:(id)arg1;
- (void)_sendDictionaryForURLRequest:(id)arg1;
@property(readonly) NSError *error;
- (int)_prepareForKeyRenewal;
- (void)_clearContext;
- (void)_setStatus:(long long)arg1;
@property(readonly) long long status;
@property(readonly, nonatomic) NSData *initializationData;
@property(readonly) id identifier;
- (id)_keySystem;
- (void)dealloc;
- (id)initWithContentKeySession:(id)arg1 customURLHandler:(struct OpaqueFigCustomURLHandler *)arg2 identifier:(id)arg3 requestInfo:(struct __CFDictionary *)arg4 requestID:(unsigned long long)arg5 providesPersistableKey:(_Bool)arg6;
- (id)initWithContentKeySession:(id)arg1 customURLProviderContext:(id)arg2 identifier:(id)arg3 initializationData:(id)arg4 providesPersistableKey:(_Bool)arg5;
- (id)initWithContentKeySession:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(_Bool)arg4;

@end

