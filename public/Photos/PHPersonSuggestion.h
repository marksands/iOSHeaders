//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHFace, PHPerson;

@interface PHPersonSuggestion : NSObject
{
    _Bool _confirmed;
    PHFace *_keyFace;
    PHPerson *_person;
}

@property(readonly, nonatomic) _Bool confirmed; // @synthesize confirmed=_confirmed;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) PHFace *keyFace; // @synthesize keyFace=_keyFace;
- (void).cxx_destruct;
- (id)initWithKeyFace:(id)arg1 person:(id)arg2 confirmed:(_Bool)arg3;

@end

