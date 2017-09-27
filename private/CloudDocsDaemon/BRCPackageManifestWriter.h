//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCClientZone, NSError, NSOutputStream, NSString, NSURL, PBMessageStreamWriter;

@interface BRCPackageManifestWriter : NSObject
{
    BRCClientZone *_clientZone;
    NSString *_stageID;
    PBMessageStreamWriter *_writer;
    NSOutputStream *_stream;
    NSURL *_url;
    NSError *_error;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (_Bool)stagePackageWithReader:(id)arg1 package:(id)arg2 xattrsPackage:(id)arg3 stageItemURL:(id)arg4 livefd:(int)arg5 recordName:(id)arg6;
- (_Bool)_stageExistingPackageItem:(id)arg1 withLiveFd:(int)arg2 stageFd:(int)arg3;
- (unsigned short)_computedFileModeForPackageItem:(id)arg1;
- (_Bool)_packageItem:(id)arg1 matchesMode:(unsigned short)arg2;
- (void)_applyFileMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyDirectoryMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyQuarantineMetadataWithManifestItem:(id)arg1 fd:(int)arg2;
- (_Bool)done;
- (_Bool)addLocalItem:(id)arg1;
- (_Bool)addItem:(id)arg1;
- (id)initWithZone:(id)arg1 stageID:(id)arg2 url:(id)arg3;
- (void)_handleStreamError;

@end

