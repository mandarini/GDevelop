// @flow
import * as React from 'react';
import { action } from '@storybook/addon-actions';
import muiDecorator from '../../ThemeDecorator';
import paperDecorator from '../../PaperDecorator';
import EditProfileDialog from '../../../Profile/EditProfileDialog';

export default {
  title: 'Profile/EditProfileDialog',
  component: EditProfileDialog,
  decorators: [paperDecorator, muiDecorator],
};

const defaultProps = {
  onClose: () => action('onClose')(),
  onEdit: action('onEdit'),
  onDelete: action('onDelete'),
  actionInProgress: false,
  error: null,
  profile: {
    id: 'id',
    email: 'email',
    username: 'username',
    description: 'I am just another video game enthusiast!',
    getGameStatsEmail: false,
    getNewsletterEmail: true,
    isCreator: true,
    isPlayer: false,
    createdAt: 12345,
    updatedAt: 12345,
    appLanguage: 'en',
    donateLink: 'https://www.gdevelop-app.com',
    communityLinks: {
      personalWebsiteLink: 'https://indie-user.com',
      personalWebsite2Link: 'https://indie-user2.com',
      twitterUsername: 'indie-user',
      facebookUsername: 'indie-user',
      youtubeUsername: 'indie-user',
      tiktokUsername: 'indie-user',
      instagramUsername: 'indie-user',
      redditUsername: 'indie-user',
      snapchatUsername: 'indie-user',
      discordServerLink: 'https://discord.gg/indie-user',
    },
  },
  subscription: {
    userId: 'id',
    planId: 'planId',
    createdAt: 12345,
    updatedAt: 12345,
  },
};
export const WithSubscription = () => <EditProfileDialog {...defaultProps} />;

export const WithoutSubscription = () => (
  <EditProfileDialog {...defaultProps} subscription={null} />
);

export const ErrorFromBackend = () => (
  <EditProfileDialog {...defaultProps} error={{ code: 'auth/username-used' }} />
);

export const Submitting = () => (
  <EditProfileDialog {...defaultProps} actionInProgress />
);
