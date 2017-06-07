//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class OADFill;

__attribute__((visibility("hidden")))
@interface CMImageFillMapper : CMMapper
{
    OADFill *mFill;
    struct CGRect mBounds;
}

- (void).cxx_destruct;
- (_Bool)isCropped;
- (struct CGRect)uncroppedBox;
- (void)mapNonImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3;
- (void)mapImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3;
- (id)mapImageFill:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOadFill:(id)arg1 bounds:(struct CGRect)arg2 parent:(id)arg3;
- (id)convertMetafileToPdf:(id)arg1 state:(id)arg2;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)mainSubBlip;

@end

