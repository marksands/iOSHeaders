//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCH3DFillSetIdentifier : NSObject
{
    NSString *_textureSetID;
    int _seriesIndex;
    int _fillPropertyType;
}

+ (id)instanceWithDEPRECATEDArchive:(const struct DEPRECATEDChart3DFillArchive *)arg1 unarchiver:(id)arg2;
+ (id)instanceWithArchive:(const struct Chart3DFillArchive *)arg1 unarchiver:(id)arg2;
+ (id)identifierWithContentsOfDictionary:(id)arg1;
+ (id)identifierWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3;
+ (id)identifierWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;
@property(readonly, nonatomic) NSString *textureSetID; // @synthesize textureSetID=_textureSetID;
- (void)didInitFromSOS;
- (id)mipmapTextureSetFilename;
- (id)lowResTextureSetFilename;
@property(readonly, nonatomic) NSString *textureSetFilename;
- (_Bool)isOnDemandResource;
- (_Bool)isStoredInLocalBundle;
- (id)mipmapOnDemandResourceTag;
- (id)textureOnDemandResourceTag;
- (id)mipmapLocalDirectoryPath;
- (id)lowResLocalDirectoryPath;
- (id)localDirectoryPath;
- (void)setSeriesIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long seriesIndex;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)saveToArchive:(struct Chart3DFillArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DFillArchive *)arg1 unarchiver:(id)arg2;
- (unsigned long long)countOfSeriesInFillSet;
- (id)loadPropertiesDictionary;
- (_Bool)isSageCompatible;
- (id)p_version;
- (id)p_getPlist;
- (id)p_loadPlist;
- (id)p_plistData;
- (id)p_plistPath;
- (id)p_sageFillSetList;
- (unsigned long long)seriesIndexFromSageSeriesName:(id)arg1;
- (id)sageSeriesName;
- (id)p_sageSeriesNames;
- (int)fillPropertyTypeFromName:(id)arg1;
- (id)sageFillName;
- (id)p_sageFillPropertyNames;
- (id)dictionaryRepresentation;
- (id)initWithContentsOfDictionary:(id)arg1;
- (id)initWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3;
- (id)initWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;

@end

