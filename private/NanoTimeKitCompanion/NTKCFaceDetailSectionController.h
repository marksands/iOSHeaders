//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, NTKCDetailTableViewCell, NTKCFaceDetailSectionHeaderView, NTKFace, UITableView;

@interface NTKCFaceDetailSectionController : NSObject
{
    _Bool _inGallery;
    _Bool _hasSpacerRow;
    long long _section;
    NSString *_titleForHeader;
    NTKFace *_face;
    UITableView *_tableView;
    NTKCDetailTableViewCell *_cell;
    NSMutableArray *_rows;
    NTKCFaceDetailSectionHeaderView *_headerView;
}

+ (void)registerForTableView:(id)arg1;
@property(retain, nonatomic) NTKCFaceDetailSectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) NTKCDetailTableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) _Bool hasSpacerRow; // @synthesize hasSpacerRow=_hasSpacerRow;
@property(nonatomic) _Bool inGallery; // @synthesize inGallery=_inGallery;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NTKFace *face; // @synthesize face=_face;
@property(readonly, nonatomic) NSString *titleForHeader; // @synthesize titleForHeader=_titleForHeader;
@property(nonatomic) long long section; // @synthesize section=_section;
- (void).cxx_destruct;
- (id)_newSectionHeader;
- (void)faceDidChangeResourceDirectory;
- (void)faceDidChange;
- (void)didSelectRow:(long long)arg1;
- (_Bool)_canSelectRow:(long long)arg1;
- (_Bool)canSelectRow:(long long)arg1;
- (double)heightForHeaderView;
- (id)_spacerRow;
- (double)_heightForSpacerRow;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
@property(readonly, nonatomic) long long numberOfRows;
- (void)_commonInit;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3;

@end

