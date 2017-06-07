//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OCMapper.h>

@class NSData, NSString, NSURL, OCDReader, OITSUProgressContext, TCImportTracing;

__attribute__((visibility("hidden")))
@interface OCImporter : OCMapper
{
    NSURL *mURL;
    NSData *mData;
    OCDReader *mReader;
    TCImportTracing *mTracing;
    _Bool mTryAlternateReader;
    OITSUProgressContext *mProgressContext;
    NSString *_lastPasswordAttempted;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *lastPasswordAttempted; // @synthesize lastPasswordAttempted=_lastPasswordAttempted;
@property(readonly, nonatomic) TCImportTracing *tracing; // @synthesize tracing=mTracing;
@property(retain) OITSUProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
- (void)finalizeWithDocumentState:(id)arg1;
- (id)displayName;
- (id)filename;
- (_Bool)setPassphrase:(id)arg1;
- (_Bool)isDocumentEncryptedUnsupportedVersion:(_Bool *)arg1 errorMessage:(id *)arg2;
- (_Bool)isDocumentEncryptedUnsupportedVersionHelper:(_Bool *)arg1 errorMessage:(id *)arg2 readError:(_Bool *)arg3;
- (_Bool)tryAlternateReader;
- (void)setURL:(id)arg1;
- (id)url;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (_Bool)start;
- (_Bool)isXML;

@end

