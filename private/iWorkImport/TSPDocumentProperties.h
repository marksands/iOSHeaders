//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSUUID, TSPDocumentRevision;

__attribute__((visibility("hidden")))
@interface TSPDocumentProperties : NSObject <NSCopying>
{
    NSUUID *_versionUUID;
    NSUUID *_shareUUID;
    unsigned long long _fileFormatVersion;
    TSPDocumentRevision *_revision;
    NSDictionary *_additionalProperties;
    NSUUID *_documentUUID;
}

+ (id)shareIdentifierRelativePath;
+ (id)documentPropertiesRelativePath;
+ (id)keychainGenericItemForDocumentUUID:(id)arg1;
+ (_Bool)documentIsEncryptedAtURL:(id)arg1;
+ (id)documentRevisionAtURL:(id)arg1;
+ (id)documentUUIDAtURL:(id)arg1;
@property(copy, nonatomic) NSUUID *documentUUID; // @synthesize documentUUID=_documentUUID;
@property(copy, nonatomic) NSDictionary *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(copy, nonatomic) TSPDocumentRevision *revision; // @synthesize revision=_revision;
@property(nonatomic) unsigned long long fileFormatVersion; // @synthesize fileFormatVersion=_fileFormatVersion;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSUUID *shareUUID;
- (void)updateVersionUUID;
@property(readonly, nonatomic) NSUUID *versionUUID;
- (void)updateDocumentAndShareUUID;
- (void)updateDocumentUUID;
- (_Bool)writeToPropertiesURL:(id)arg1 error:(id *)arg2;
- (id)encodedPropertyListWithError:(id *)arg1;
- (_Bool)writeToDocumentBundleURL:(id)arg1 error:(id *)arg2;
- (_Bool)writeToPackageWriter:(id)arg1 error:(id *)arg2;
- (_Bool)writeToDocumentURL:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)UUIDFromDocumentProperties:(id)arg1 key:(id)arg2;
- (void)readDocumentPropertiesFromDictionary:(id)arg1;
- (id)initWithPropertiesURL:(id)arg1 error:(id *)arg2;
- (id)initWithFilePackageURL:(id)arg1 zipArchive:(id)arg2 allowMissingPropertyList:(_Bool)arg3 error:(id *)arg4;
- (id)initWithDocumentFileURL:(id)arg1 allowMissingPropertyList:(_Bool)arg2 error:(id *)arg3;
- (id)initWithDocumentBundleURL:(id)arg1 allowMissingPropertyList:(_Bool)arg2 error:(id *)arg3;
- (id)initWithDocumentURL:(id)arg1 allowMissingPropertyList:(_Bool)arg2 error:(id *)arg3;
- (id)initWithDocumentURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end

