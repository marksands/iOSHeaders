//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIME/MFMessageBody.h>

#import "ECMimePart.h"

@class MFMimePart, NSString;

@interface MFMimeBody : MFMessageBody <ECMimePart>
{
    MFMimePart *_topLevelPart;
    unsigned int _preferredAlternative:16;
    unsigned int _numAlternatives:16;
}

+ (id)copyNewMimeBoundary;
+ (id)versionString;
- (id)textHtmlPart;
- (id)preferredBodyPart;
- (long long)preferredAlternative;
- (void)setPreferredAlternative:(long long)arg1;
- (long long)numberOfAlternatives;
@property(readonly, nonatomic) unsigned long long totalTextSize;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 asHTML:(_Bool)arg3 isComplete:(_Bool *)arg4;
- (_Bool)isRich;
- (_Bool)isHTML;
- (id)attachmentURLs;
- (id)attachments;
- (unsigned int)numberOfAttachmentsSigned:(_Bool *)arg1 encrypted:(_Bool *)arg2;
- (id)firstPartPassingTest:(CDUnknownBlockType)arg1;
- (id)partWithNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mimeSubtype;
@property(readonly, copy, nonatomic) NSString *mimeType;
@property(retain, nonatomic) MFMimePart *topLevelPart;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

