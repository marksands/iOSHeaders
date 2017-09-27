//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUSessionInfo.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUImagePickerSessionInfo : PUSessionInfo
{
    _Bool _showsPrompt;
    unsigned long long _selectionLimit;
    NSString *_staticPrompt;
}

@property(copy, nonatomic) NSString *staticPrompt; // @synthesize staticPrompt=_staticPrompt;
@property(nonatomic) _Bool showsPrompt; // @synthesize showsPrompt=_showsPrompt;
- (void)setSelectionLimit:(unsigned long long)arg1;
- (unsigned long long)selectionLimit;
- (void).cxx_destruct;
- (id)localizedPrompt;
- (_Bool)isSelectingAssets;
- (id)initWithPhotoSelectionManager:(id)arg1;

@end

