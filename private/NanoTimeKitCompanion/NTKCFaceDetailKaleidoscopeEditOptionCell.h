//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionCell.h>

@interface NTKCFaceDetailKaleidoscopeEditOptionCell : NTKCFaceDetailEditOptionCell
{
    id <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> delegate;
    long long _userOptionIndex;
}

@property(nonatomic) long long userOptionIndex; // @synthesize userOptionIndex=_userOptionIndex;
@property(nonatomic) __weak id <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)selectUserOption;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_setupFromCollection;

@end

