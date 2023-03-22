

		arr = (char *)main;


		for (i = 0; i < bytes; i++)
		{
			if (i == bytes - 1)
			{
				printf("%02hhx\n", arr[i]);
				break;
			}
			printf("%02hhx ", arr[i]);
		}
		return (0);
	}
