//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDShapeInfo.h>

@class NSUUID, TSDDrawableInfo;

__attribute__((visibility("hidden")))
@interface TSDConnectionLineInfo : TSDShapeInfo
{
    NSUUID *mConnectedFromID;
    NSUUID *mConnectedToID;
    TSDDrawableInfo *mConnectedToInfo;
    TSDDrawableInfo *mConnectedFromInfo;
    struct {
        unsigned int connectedFrom:1;
        unsigned int connectedTo:1;
    } mInvalidFlags;
}

@property(retain, nonatomic) TSDDrawableInfo *connectedFromInfo; // @synthesize connectedFromInfo=mConnectedFromInfo;
@property(retain, nonatomic) TSDDrawableInfo *connectedToInfo; // @synthesize connectedToInfo=mConnectedToInfo;
@property(retain, nonatomic) NSUUID *connectedToID; // @synthesize connectedToID=mConnectedToID;
@property(retain, nonatomic) NSUUID *connectedFromID; // @synthesize connectedFromID=mConnectedFromID;
- (void).cxx_destruct;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (void)performBlockWithTemporaryLayout:(CDUnknownBlockType)arg1;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (_Bool)allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (_Bool)canAnchor;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (void)computeLayoutInfoGeometry:(id *)arg1 andPathSource:(id *)arg2;
- (id)computeLayoutInfoGeometry;
@property(retain, nonatomic) TSDDrawableInfo *connectedFrom;
@property(retain, nonatomic) TSDDrawableInfo *connectedTo;
- (_Bool)isLine;
- (id)presetKind;
- (Class)repClass;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (void)saveGeometryToArchive:(struct GeometryArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ConnectionLineArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ConnectionLineArchive *)arg1 unarchiver:(id)arg2;
- (int)elementKind;

@end

